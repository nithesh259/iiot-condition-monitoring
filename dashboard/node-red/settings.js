module.exports = {

    uiPort: process.env.PORT || 1880,

    flowFile: "flows.json",

    credentialSecret: "iiot-condition-monitoring",

    editorTheme: {
        projects: {
            enabled: false
        }
    },

    functionGlobalContext: {
    }

};