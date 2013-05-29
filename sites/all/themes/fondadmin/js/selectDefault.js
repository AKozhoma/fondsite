$ = jQuery.noConflict();

window.onload= function() {
    var defaultFormatValue = 'full_html';
    var titleReportDefault = new Date().getTime();
    var defaultLanguage = 'ru';

    $(document).ready(function($) {
   // Выставление для всех редакторов текста автоматического значения 'full_html'
        $("select.ckeditor-processed option").each(function(){
            if ($(this).text() == defaultFormatValue)
                $(this).attr("selected","selected");
              else
                $(this).removeAttr("selected");
            });
        $("select.ckeditor-processed").val(defaultFormatValue);
   //---------------------------------------------------------------------------
        $(".node-report-form .form-item-title input").val(titleReportDefault); // Генерация уникального заголовка для отчетов
        $("#edit-language").val(defaultLanguage); // Выставление для всех селекторов выбора языка "Русского" значения

    // Проверка и выставление текущего состояния чекбоксов и дополнительного поля при создании Отчета
        if ($("#edit-field-project-link-und").is(':checked')) {
            $("#edit-field-report-project input:checkbox").attr('disabled', 'disabled');
        }
        else {
            $(".form-item-field-used-und-0-value input:text").attr("disabled", "disabled");
            $("#edit-field-report-project input:checkbox").removeAttr("disabled");
        }

    // Обработка измения состояния переключателя при создании Отчета
        $("#edit-field-project-link-und").click(function() {
            if (this.checked) {
                $("#edit-field-report-project input:checkbox").attr("disabled", "disabled");
                $(".form-item-field-used-und-0-value input:text").removeAttr("disabled");
            }
            else {
                $("#edit-field-report-project input:checkbox").removeAttr("disabled");
                $(".form-item-field-used-und-0-value input:text").attr("disabled", "disabled");
            }
        });

    // Обработка измения состояния переключателя при редактировании Отчета
        if ($("#edit-field-project-link-ru").is(':checked')) {
            $("#edit-field-report-project input:checkbox").attr('disabled', 'disabled');
        }
        else {
            $(".form-item-field-used-ru-0-value input:text").attr("disabled", "disabled");
            $("#edit-field-report-project input:checkbox").removeAttr("disabled");
        }

    // Проверка и выставление текущего состояния чекбоксов и дополнительного поля при создании Отчета
        $("#edit-field-project-link-ru").click(function() {
            if (this.checked) {
                $("#edit-field-report-project input:checkbox").attr("disabled", "disabled");
                $(".form-item-field-used-ru-0-value input:text").removeAttr("disabled");
            }
            else {
                $("#edit-field-report-project input:checkbox").removeAttr("disabled");
                $(".form-item-field-used-ru-0-value input:text").attr("disabled", "disabled");
            }
        });
    });
}
