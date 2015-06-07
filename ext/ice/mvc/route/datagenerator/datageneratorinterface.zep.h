
extern zend_class_entry *ice_mvc_route_datagenerator_datageneratorinterface_ce;

ZEPHIR_INIT_CLASS(Ice_Mvc_Route_DataGenerator_DataGeneratorInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_ice_mvc_route_datagenerator_datageneratorinterface_addroute, 0, 0, 3)
	ZEND_ARG_INFO(0, httpMethod)
	ZEND_ARG_INFO(0, routeData)
	ZEND_ARG_INFO(0, handler)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(ice_mvc_route_datagenerator_datageneratorinterface_method_entry) {
	PHP_ABSTRACT_ME(Ice_Mvc_Route_DataGenerator_DataGeneratorInterface, addRoute, arginfo_ice_mvc_route_datagenerator_datageneratorinterface_addroute)
	PHP_ABSTRACT_ME(Ice_Mvc_Route_DataGenerator_DataGeneratorInterface, getData, NULL)
	PHP_FE_END
};
