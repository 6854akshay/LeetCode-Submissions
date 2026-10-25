/**
 * @return {Function}
 */
var createHelloWorld = function() {
    const c = "Hello World";
    
    return function(...args) {
        return c;
        
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */