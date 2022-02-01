#include <hex/api/content_registry.hpp>
#include <hex/api/localization.hpp>

namespace hex::plugin::windows {

    void registerLanguageDeDE() {
        ContentRegistry::Language::addLocalizations("de-DE", {
            { "hex.windows.title_bar_button.feedback", "Feedback hinterlassen" },
            { "hex.windows.title_bar_button.debug_build", "Debug build"},

            { "hex.windows.view.tty_console.name", "TTY Konsole" },
                { "hex.windows.view.tty_console.config", "Konfiguration"},
                    { "hex.windows.view.tty_console.port", "Port" },
                    { "hex.windows.view.tty_console.reload", "Neu Laden" },
                    { "hex.windows.view.tty_console.baud", "Baudrate" },
                    { "hex.windows.view.tty_console.num_bits", "Datenbits" },
                    { "hex.windows.view.tty_console.stop_bits", "Stoppbits" },
                    { "hex.windows.view.tty_console.parity_bits", "Paritätsbit" },
                    { "hex.windows.view.tty_console.cts", "CTS flow control benutzen" },
                    { "hex.windows.view.tty_console.connect", "Verbinden" },
                    { "hex.windows.view.tty_console.disconnect", "Trennen" },
                    { "hex.windows.view.tty_console.connect_error", "Verbindung mit COM Port fehlgeschlagen!" },
                    { "hex.windows.view.tty_console.no_available_port", "Kein valider COM port wurde ausgewählt oder keiner ist verfügbar!" },
                    { "hex.windows.view.tty_console.clear", "Löschen" },
                    { "hex.windows.view.tty_console.auto_scroll", "Auto scroll" },
                { "hex.windows.view.tty_console.console", "Konsole" },
                    { "hex.windows.view.tty_console.send_etx", "ETX Senden" },
                    { "hex.windows.view.tty_console.send_eot", "EOT Senden" },
                    { "hex.windows.view.tty_console.send_sub", "SUB Senden" },

                    { "hex.builtin.setting.general.context_menu_entry", "Windows Kontextmenu-Eintrag" },
        });
    }

}