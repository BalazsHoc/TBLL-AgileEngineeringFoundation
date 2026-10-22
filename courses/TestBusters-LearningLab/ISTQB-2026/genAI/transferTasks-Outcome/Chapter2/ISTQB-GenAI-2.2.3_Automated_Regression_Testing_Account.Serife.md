# 2.2.3 – Erstellung von Regressionstests mit GenAI für die Profil-/Account-Funktion

## Reference to ISTQB Syllabus Chapter

ISTQB GenAI – 2.2.3 Automated Regression Testing with Generative AI

## Link to the Transfer Task File

https://github.com/rgroetz2/RBI-AgileEngineeringFoundation/blob/main/courses/TestBusters-LearningLab/ISTQB-2026/genAI/transferTasks-Outcome/ISTQB-GenAI-2.2.3_Automated_Regression_Testing_Account.Serife

## Outcome

### 1. Aufgabenstellung und Ziel

Ziel dieser Transferaufgabe war es, Generative AI (GenAI) zur Erstellung eines Regressionstestsets für die Profil-/Account-Funktion einzusetzen.

Für Version V6 wurden Änderungen an der Profilfunktion vorgenommen. Diese Änderungen können bestehende Funktionen beeinflussen. Daher sollten mögliche Auswirkungen analysiert, geeignete Regressionstestfälle erstellt und ein ausgewählter Testfall automatisiert werden.

Die Aufgabe umfasste folgende Schritte:

- Analyse der Änderungen und ihrer möglichen Auswirkungen.
- Identifikation der betroffenen Funktionen und Risiken.
- Erstellung von Regressionstestfällen mithilfe von GenAI.
- Strukturierung der Testfälle nach der T1–T5-Testdesigntechnik.
- Auswahl geeigneter Regressionstests anhand ihrer Priorität.
- Automatisierung eines Testfalls mit Playwright.
- Überprüfung der generierten Testfälle und Bewertung der Ergebnisse.

### 2. Kontext und Änderungen in V6

Die Änderungen in V6 betreffen insbesondere zwei Bereiche:

| Änderung | Mögliche Auswirkung |
|---|---|
| Neue Validierungen für Profilfelder | Gültige Eingaben könnten fälschlicherweise abgelehnt oder ungültige Eingaben akzeptiert werden. |
| Umstellung der Passwortspeicherung von MD5 auf SHA-256 | Die Passwortverarbeitung, Passwortänderung und Anmeldung könnten beeinträchtigt werden. |

Die Regressionstests sollen überprüfen, ob die bestehende Funktionalität nach diesen Änderungen weiterhin korrekt funktioniert.

### 3. Auswirkungsanalyse und Risikobewertung

Vor der Erstellung der Regressionstests wurden die betroffenen Bereiche und mögliche Fehler analysiert.

| Testbereich | Möglicher Fehler | Priorität |
|---|---|---|
| Profilfelder | Die Validierung akzeptiert ungültige Daten oder lehnt gültige Daten ab. | Hoch |
| Profilspeicherung | Änderungen werden nicht korrekt gespeichert. | Hoch |
| Datenpersistenz | Gespeicherte Änderungen sind nach dem Neuladen nicht mehr vorhanden. | Hoch |
| Passwortänderung | Ein gültiges neues Passwort kann nicht gespeichert werden. | Hoch |
| Anmeldung | Die Anmeldung funktioniert nach einer Passwortänderung nicht mehr. | Hoch |
| Fehlerbehandlung | Fehler werden nicht korrekt angezeigt oder behandelt. | Mittel bis hoch |
| Sicherheitsrelevante Eingaben | Manipulierte Eingaben werden nicht angemessen behandelt. | Hoch |

Die Analyse zeigt, dass insbesondere die Speicherung von Profildaten, die Feldvalidierung und die Passwortverarbeitung berücksichtigt werden müssen.

### 4. Erstellung der Regressionstestfälle mit GenAI

GenAI wurde eingesetzt, um mögliche Regressionstestfälle zu identifizieren und zu strukturieren.

Die generierten Testfälle umfassen positive Tests, alternative Abläufe, Ausnahmesituationen, negative Eingaben und sicherheitsrelevante Szenarien.

Die Testfälle wurden nach der T1–T5-Testdesigntechnik organisiert.

| Kategorie | Bedeutung | Beispiel |
|---|---|---|
| T1 – Happy Path | Erfolgreicher Standardablauf mit gültigen Daten | Profil mit gültigen Daten aktualisieren |
| T2 – Alternative Path | Alternativer gültiger Ablauf | Profil mit optionalen Angaben aktualisieren |
| T3 – Exception Path | Behandlung von Ausnahmen und technischen Fehlern | Profiländerung bei einem Serverfehler |
| T4 – Negative Test | Prüfung ungültiger Eingaben | Falsches aktuelles Passwort eingeben |
| T5 – Misuse Test | Prüfung missbräuchlicher oder sicherheitsrelevanter Eingaben | Manipulierte Eingaben oder unberechtigte Änderungen testen |

### 5. Vorgeschlagene Regressionstestfälle

Auf Grundlage der Analyse wurde folgendes Regressionstestset erstellt.

| Test-ID | Kategorie | Testfall | Erwartetes Ergebnis |
|---|---|---|---|
| RT-01 | T1 | Profil mit gültigen Daten aktualisieren | Die Daten werden gespeichert und nach dem Neuladen korrekt angezeigt. |
| RT-02 | T1 | Vorhandene Profildaten überprüfen | Die gespeicherten Profildaten werden korrekt angezeigt. |
| RT-03 | T1 | Profil ohne Änderungen erneut speichern | Der Vorgang wird ohne unerwartete Fehler abgeschlossen. |
| RT-04 | T1 | Passwort mit gültigen Angaben ändern | Das Passwort wird erfolgreich geändert. |
| RT-05 | T2 | Profil mit optionalen Angaben aktualisieren | Optionale Felder werden gemäß den Anforderungen behandelt. |
| RT-06 | T2 | Profil nach einer Änderung erneut öffnen | Die zuletzt gespeicherten Daten werden angezeigt. |
| RT-07 | T3 | Profiländerung bei einem Serverfehler speichern | Der Fehler wird angemessen behandelt und angezeigt. |
| RT-08 | T3 | Speichervorgang bei unterbrochener Verbindung durchführen | Der Fehler wird angemessen behandelt. |
| RT-09 | T4 | Ein Pflichtfeld leer lassen | Die Eingabe wird gemäß den Anforderungen abgelehnt. |
| RT-10 | T4 | Ungültige E-Mail-Adresse eingeben, sofern das Feld bearbeitbar ist | Die ungültige Eingabe wird abgelehnt. |
| RT-11 | T4 | Ungültige Werte in validierten Profilfeldern eingeben | Die Validierung verhindert ungültige Daten. |
| RT-12 | T4 | Eingaben mit unzulässiger Länge verwenden | Die Eingabe wird entsprechend den definierten Grenzen behandelt. |
| RT-13 | T4 | Falsches aktuelles Passwort eingeben | Die Passwortänderung wird abgelehnt. |
| RT-14 | T4 | Unterschiedliche Werte für neues Passwort und Bestätigung eingeben | Die Passwortänderung wird abgelehnt. |
| RT-15 | T5 | Profilfelder mit manipulierten Eingaben testen | Die Anwendung verarbeitet die Eingaben sicher. |
| RT-16 | T5 | Unberechtigte Profiländerungen versuchen | Unberechtigte Änderungen werden verhindert. |

Die vorgeschlagenen Testfälle müssen mit den tatsächlichen Anforderungen abgeglichen werden. Insbesondere Pflichtfelder, Feldgrenzen und erlaubte Zeichen müssen durch die Spezifikation bestätigt werden.

### 6. Auswahl und Priorisierung der Regressionstests

Da nicht alle Testfälle bei jedem Testlauf ausgeführt werden müssen, wurde eine risikobasierte Auswahl vorgenommen.

#### Smoke-Testset

Für einen ersten schnellen Regressionstestlauf wurden folgende Testfälle vorgesehen:

- RT-01: Profil erfolgreich aktualisieren.
- RT-02: Gespeicherte Profildaten überprüfen.
- RT-04: Passwortänderung mit gültigen Angaben testen.
- RT-13: Passwortänderung mit falschem aktuellem Passwort testen.

#### Regressionstestset

Für eine umfassendere Regression wurden die Testfälle RT-01 bis RT-06 sowie RT-09 bis RT-16 berücksichtigt.

RT-07 und RT-08 können in späteren Testläufen berücksichtigt werden, sofern die entsprechenden Fehler- und Unterbrechungsszenarien in der Testumgebung reproduzierbar sind.

Die endgültige Auswahl hängt vom Risiko, von den Anforderungen und vom verfügbaren Testaufwand ab.

### 7. Automatisierung mit Playwright

Für die praktische Umsetzung wurde RT-01 ausgewählt.

**Test-ID:** RT-01  
**Testdesignkategorie:** T1 – Happy Path  
**Testziel:** Überprüfen, ob eine Profiländerung mit gültigen Daten gespeichert wird und nach dem Neuladen erhalten bleibt.

#### Testschritte

1. Die Login-Seite der Testanwendung öffnen.
2. Mit einem gültigen Testkonto anmelden.
3. Die Profilseite öffnen.
4. Ein bearbeitbares Profilfeld mit einem gültigen Wert ändern.
5. Auf die Schaltfläche „Profil ändern“ klicken.
6. Die erfolgreiche Speicherung überprüfen.
7. Die Seite neu laden.
8. Überprüfen, ob der geänderte Wert weiterhin angezeigt wird.

### Automatisierter Test – RT-01

Der Testfall RT-01 wurde mit Playwright automatisiert.

```typescript
import 'dotenv/config';
import { test, expect } from '@playwright/test';

test('RT-01 – Update profile with valid data', async ({ page }) => {
  await page.goto('https://holtesting.practicesoftwaretesting.com/auth/login');

  await page.locator('[data-test="email"]').fill(process.env.TEST_EMAIL!);
  await page.locator('[data-test="password"]').fill(process.env.TEST_PASSWORD!);
  await page.locator('[data-test="login-submit"]').click();

  await expect(page.locator('[data-test="nav-profile"]')).toBeVisible();
  await page.locator('[data-test="nav-profile"]').click();

  const firstName = page.locator('[data-test="first-name"]');
  await expect(firstName).toBeVisible();

  await firstName.fill('JaneTest');

  await page.getByRole('button', {
    name: /profil ändern|update profile/i
  }).click();

  await page.reload();
  await expect(firstName).toHaveValue('JaneTest');
});
```

#### Technische Umsetzung

Für die Automatisierung wurden Playwright und TypeScript verwendet.

Die Zugangsdaten werden über Umgebungsvariablen aus einer `.env`-Datei geladen. Dadurch werden sensible Zugangsdaten nicht direkt im Testcode gespeichert.

Der automatisierte Test überprüft nicht nur die Änderung des Profilfeldes, sondern auch, ob die Änderung nach dem Neuladen der Seite weiterhin vorhanden ist.

#### Ausführungsergebnis

| Merkmal | Ergebnis |
|---|---|
| Testfall | RT-01 |
| Automatisierungstool | Playwright |
| Programmiersprache | TypeScript |
| Browser | Chromium |
| Ausführungsdatum | 22. Oktober 2026 |
| Status | Bestanden |
| Ergebnis | 1 Test bestanden |

RT-01 wurde erfolgreich ausgeführt.

Dieses Ergebnis bestätigt den erfolgreichen Ablauf des automatisierten Tests in der verwendeten Testumgebung. Es bedeutet jedoch nicht, dass alle vorgeschlagenen Regressionstestfälle bereits ausgeführt oder bestanden wurden.

### 8. Learning Summary

| Konzept | Wichtigste Erkenntnis |
|---|---|
| Regressionstests | Regressionstests überprüfen, ob bestehende Funktionen nach Änderungen weiterhin korrekt funktionieren. |
| Auswirkungsanalyse | Die Analyse der Änderungen hilft dabei, betroffene Funktionen und mögliche Risiken frühzeitig zu identifizieren. |
| T1–T5-Testdesigntechnik | Die strukturierte Einteilung unterstützt eine systematische Abdeckung unterschiedlicher Testszenarien. |
| Risikobasierte Testauswahl | Kritische Funktionen sollten entsprechend ihrem Risiko priorisiert werden. |
| GenAI für Testdesign | GenAI kann Testideen generieren und die Erstellung eines strukturierten Testsets beschleunigen. |
| Testautomatisierung | Playwright ermöglicht die wiederholbare automatische Ausführung ausgewählter Regressionstests. |
| Datenpersistenz | Nach dem Speichern sollte überprüft werden, ob Änderungen auch nach dem Neuladen der Seite erhalten bleiben. |
| Passwortverarbeitung | Änderungen an der Passwortspeicherung erfordern besondere Aufmerksamkeit bei Passwortänderung und Anmeldung. |
| Menschliche Überprüfung | KI-generierte Testfälle müssen mit den Anforderungen und dem tatsächlichen Systemverhalten abgeglichen werden. |
| Aussagekraft der Testergebnisse | Ein bestandener automatisierter Test bestätigt nur das Verhalten, das durch diesen Test tatsächlich überprüft wurde. |

### 9. Herausforderungen und Grenzen

Bei der Verwendung von GenAI müssen mehrere Aspekte berücksichtigt werden.

**Fachliche Richtigkeit:**  
Generierte Testfälle können Annahmen enthalten, die nicht durch die tatsächlichen Anforderungen bestätigt sind.

**Vollständigkeit:**  
GenAI kann relevante Randfälle übersehen. Deshalb ist eine manuelle Überprüfung der Testabdeckung erforderlich.

**Testdaten:**  
Für reproduzierbare Tests müssen geeignete und gültige Testdaten verwendet werden.

**Automatisierung:**  
Nicht jeder vorgeschlagene Testfall lässt sich ohne zusätzliche Vorbereitung automatisieren. Einige Szenarien benötigen beispielsweise kontrollierte Fehlerbedingungen oder spezielle Testdaten.

**Bewertung der Ergebnisse:**  
Die erfolgreiche Ausführung von RT-01 beweist nicht, dass alle Änderungen in V6 fehlerfrei sind. Dafür müssen weitere geeignete Regressionstests ausgeführt werden.

### 10. Einsatz und Bewertung von GenAI

GenAI unterstützte die folgenden Arbeitsschritte:

- Analyse möglicher Auswirkungen der Änderungen.
- Generierung von Testideen und Testfällen.
- Strukturierung der Testfälle nach T1–T5.
- Unterstützung bei der Priorisierung der Regressionstests.
- Vorbereitung der Automatisierung eines ausgewählten Testfalls.

Die generierten Ergebnisse wurden als Vorschläge betrachtet und mussten anhand der tatsächlichen Anwendung und ihrer Anforderungen überprüft werden.

Die Kombination aus GenAI und menschlicher Expertise ist entscheidend: GenAI unterstützt die Erstellung und Strukturierung, während der Tester die fachliche Richtigkeit und Eignung der Testfälle beurteilt.

### 11. Fazit

Im Rahmen dieser Transferaufgabe wurde GenAI zur Erstellung eines Regressionstestsets für die Profil-/Account-Funktion eingesetzt.

Die möglichen Auswirkungen der Änderungen in V6 wurden analysiert und relevante Testfälle nach der T1–T5-Testdesigntechnik strukturiert. Anschließend wurden Regressionstests anhand ihrer Priorität ausgewählt.

Der Testfall RT-01 wurde mit Playwright automatisiert und erfolgreich in Chromium ausgeführt. Die weiteren vorgeschlagenen Regressionstestfälle müssen entsprechend ihrer Priorität noch ausgeführt werden.

Die Aufgabe zeigt, dass GenAI den Testdesignprozess unterstützen und beschleunigen kann. Eine systematische Auswirkungsanalyse, eine risikobasierte Auswahl, eine fachliche Überprüfung und die tatsächliche Testausführung bleiben jedoch unverzichtbar.

> Behandle jedes KI-generierte Testartefakt wie einen ungeprüften ersten Entwurf eines Junior-Kollegen, der dein System noch nicht kennt. Überprüfe die fachliche Richtigkeit, bevor du es übernimmst.