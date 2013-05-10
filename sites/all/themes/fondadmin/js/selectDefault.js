$ = jQuery.noConflict();

// Выставление для всех редакторов текста автоматического значения 'full_html'
var defaultValue = 'full_html';
$(document).ready(function($) {
    $(".wysiwyg-processed").val(defaultValue)
});

// Генерация уникального заголовка для отчетов 
var titleReportDefault = new Date().getTime();
$(document).ready(function($) {
    $(".node-report-form .form-item-title input").val(titleReportDefault)
});

//$(document).ready(function($) {
//    $( "#report-node-form #edit-submit" ).click(function() {
//        $("#report-node-form").attr("action", "/reports/");
//    });
//});