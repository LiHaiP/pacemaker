/*
 * Copyright 2004-2024 the Pacemaker project contributors
 *
 * The version control history for this file may have further details.
 *
 * This source code is licensed under the GNU Lesser General Public License
 * version 2.1 or later (LGPLv2.1+) WITHOUT ANY WARRANTY.
 */

#ifndef PCMK__CRM_COMMON_XML_NAMES_INTERNAL__H
#  define PCMK__CRM_COMMON_XML_NAMES_INTERNAL__H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * XML element names used only by internal code
 */

#define PCMK__XE_ACK                    "ack"
#define PCMK__XE_ATTRIBUTES             "attributes"
#define PCMK__XE_CRM_EVENT              "crm_event"
#define PCMK__XE_CRM_XML                "crm_xml"
#define PCMK__XE_DIV                    "div"
#define PCMK__XE_DOWNED                 "downed"
#define PCMK__XE_FAILED                 "failed"
#define PCMK__XE_FAILED_UPDATE          "failed_update"
#define PCMK__XE_GENERATION_TUPLE       "generation_tuple"
#define PCMK__XE_LRM                    "lrm"
#define PCMK__XE_LRM_RESOURCE           "lrm_resource"
#define PCMK__XE_LRM_RESOURCES          "lrm_resources"
#define PCMK__XE_LRM_RSC_OP             "lrm_rsc_op"
#define PCMK__XE_MAINTENANCE            "maintenance"
#define PCMK__XE_META                   "meta"
#define PCMK__XE_NACK                   "nack"
#define PCMK__XE_NODE_STATE             "node_state"
#define PCMK__XE_OPTIONS                "options"
#define PCMK__XE_PARAM                  "param"
#define PCMK__XE_PING                   "ping"
#define PCMK__XE_PING_RESPONSE          "ping_response"
#define PCMK__XE_PSEUDO_EVENT           "pseudo_event"
#define PCMK__XE_RSC_OP                 "rsc_op"
#define PCMK__XE_SHUTDOWN               "shutdown"
#define PCMK__XE_SPAN                   "span"
#define PCMK__XE_ST_DEVICE_ID           "st_device_id"
#define PCMK__XE_ST_HISTORY             "st_history"
#define PCMK__XE_TICKET_STATE           "ticket_state"
#define PCMK__XE_TRANSIENT_ATTRIBUTES   "transient_attributes"
#define PCMK__XE_TRANSITION_GRAPH       "transition_graph"
#define PCMK__XE_XPATH_QUERY            "xpath-query"
#define PCMK__XE_XPATH_QUERY_PATH       "xpath-query-path"

// @COMPAT Deprecated since 1.1.12
#define PCMK__XE_ACL_USER               "acl_user"

/* @COMPAT Deprecate somehow. It's undocumented and behaves the same as
 * PCMK__XE_CIB in places where it's recognized.
 */
#define PCMK__XE_ALL                    "all"

// @COMPAT Deprecated since 2.1.7
#define PCMK__XE_DIFF_ADDED             "diff-added"

// @COMPAT Deprecated since 2.1.7
#define PCMK__XE_DIFF_REMOVED           "diff-removed"

// @COMPAT Deprecated since 1.0.8 (commit 4cb100f)
#define PCMK__XE_LIFETIME               "lifetime"

/* @COMPAT Deprecated since 2.0.0; alias for <clone> with PCMK_META_PROMOTABLE
 * set to "true"
 */
#define PCMK__XE_PROMOTABLE_LEGACY      "master"

// @COMPAT Support for rkt is deprecated since 2.1.8
#define PCMK__XE_RKT                    "rkt"

// @COMPAT Deprecated since 1.1.12
#define PCMK__XE_ROLE_REF               "role_ref"


/*
 * XML attribute names used only by internal code
 */

#define PCMK__XA_ATTR_CLEAR_INTERVAL    "attr_clear_interval"
#define PCMK__XA_ATTR_CLEAR_OPERATION   "attr_clear_operation"
#define PCMK__XA_ATTR_DAMPENING         "attr_dampening"
#define PCMK__XA_ATTR_HOST              "attr_host"
#define PCMK__XA_ATTR_HOST_ID           "attr_host_id"
#define PCMK__XA_ATTR_IS_PRIVATE        "attr_is_private"
#define PCMK__XA_ATTR_IS_REMOTE         "attr_is_remote"
#define PCMK__XA_ATTR_KEY               "attr_key"
#define PCMK__XA_ATTR_NAME              "attr_name"
#define PCMK__XA_ATTR_REGEX             "attr_regex"
#define PCMK__XA_ATTR_RESOURCE          "attr_resource"
#define PCMK__XA_ATTR_SECTION           "attr_section"
#define PCMK__XA_ATTR_SET               "attr_set"
#define PCMK__XA_ATTR_SET_TYPE          "attr_set_type"
#define PCMK__XA_ATTR_SYNC_POINT        "attr_sync_point"
#define PCMK__XA_ATTR_USER              "attr_user"
#define PCMK__XA_ATTR_VALUE             "attr_value"
#define PCMK__XA_ATTR_VERSION           "attr_version"
#define PCMK__XA_ATTR_WRITER            "attr_writer"
#define PCMK__XA_ATTRD_IS_FORCE_WRITE   "attrd_is_force_write"
#define PCMK__XA_CALL_ID                "call-id"
#define PCMK__XA_CLIENT_NAME            "client_name"
#define PCMK__XA_CLIENT_UUID            "client_uuid"
#define PCMK__XA_CONFIG_ERRORS          "config-errors"
#define PCMK__XA_CONFIG_WARNINGS        "config-warnings"
#define PCMK__XA_CONFIRM                "confirm"
#define PCMK__XA_CONNECTION_HOST        "connection_host"
#define PCMK__XA_CONTENT                "content"
#define PCMK__XA_CRMD_STATE             "crmd_state"
#define PCMK__XA_CRM_HOST_TO            "crm_host_to"
#define PCMK__XA_CRM_LIMIT_MAX          "crm-limit-max"
#define PCMK__XA_CRM_LIMIT_MODE         "crm-limit-mode"
#define PCMK__XA_CRM_SUBSYSTEM          "crm_subsystem"
#define PCMK__XA_CRM_SYS_FROM           "crm_sys_from"
#define PCMK__XA_CRM_SYS_TO             "crm_sys_to"
#define PCMK__XA_CRM_TASK               "crm_task"
#define PCMK__XA_CRM_TGRAPH_IN          "crm-tgraph-in"
#define PCMK__XA_CRM_USER               "crm_user"
#define PCMK__XA_DC_LEAVING             "dc-leaving"
#define PCMK__XA_DIGEST                 "digest"
#define PCMK__XA_ELECTION_AGE_SEC       "election-age-sec"
#define PCMK__XA_ELECTION_AGE_NANO_SEC  "election-age-nano-sec"
#define PCMK__XA_ELECTION_ID            "election-id"
#define PCMK__XA_ELECTION_OWNER         "election-owner"
#define PCMK__XA_GRANTED                "granted"
#define PCMK__XA_GRAPH_ERRORS           "graph-errors"
#define PCMK__XA_GRAPH_WARNINGS         "graph-warnings"
#define PCMK__XA_HIDDEN                 "hidden"
#define PCMK__XA_HTTP_EQUIV             "http-equiv"
#define PCMK__XA_IN_CCM                 "in_ccm"
#define PCMK__XA_JOIN                   "join"
#define PCMK__XA_JOIN_ID                "join_id"
#define PCMK__XA_LINE                   "line"
#define PCMK__XA_LONG_ID                "long-id"
#define PCMK__XA_MAJOR_VERSION          "major_version"
#define PCMK__XA_MINOR_VERSION          "minor_version"
#define PCMK__XA_MODE                   "mode"
#define PCMK__XA_MOON                   "moon"
#define PCMK__XA_NAMESPACE              "namespace"
#define PCMK__XA_NODE_FENCED            "node_fenced"
#define PCMK__XA_NODE_IN_MAINTENANCE    "node_in_maintenance"
#define PCMK__XA_NODE_START_STATE       "node_start_state"
#define PCMK__XA_NODE_STATE             "node_state"
#define PCMK__XA_OP_DIGEST              "op-digest"
#define PCMK__XA_OP_FORCE_RESTART       "op-force-restart"
#define PCMK__XA_OP_RESTART_DIGEST      "op-restart-digest"
#define PCMK__XA_OP_SECURE_DIGEST       "op-secure-digest"
#define PCMK__XA_OP_SECURE_PARAMS       "op-secure-params"
#define PCMK__XA_OP_STATUS              "op-status"
#define PCMK__XA_OPERATION_KEY          "operation_key"
#define PCMK__XA_PACEMAKERD_STATE       "pacemakerd_state"
#define PCMK__XA_PASSWORD               "password"
#define PCMK__XA_PRIORITY               "priority"
#define PCMK__XA_RC_CODE                "rc-code"
#define PCMK__XA_REAP                   "reap"

/* Actions to be executed on Pacemaker Remote nodes are routed through the
 * controller on the cluster node hosting the remote connection. That cluster
 * node is considered the router node for the action.
 */
#define PCMK__XA_ROUTER_NODE            "router_node"

#define PCMK__XA_RSC_ID                 "rsc-id"
#define PCMK__XA_RSC_PROVIDES           "rsc_provides"
#define PCMK__XA_SCHEMA                 "schema"
#define PCMK__XA_SCHEMAS                "schemas"
#define PCMK__XA_SRC                    "src"
#define PCMK__XA_ST_ACTION_DISALLOWED   "st_action_disallowed"
#define PCMK__XA_ST_ACTION_TIMEOUT      "st_action_timeout"
#define PCMK__XA_ST_AVAILABLE_DEVICES   "st-available-devices"
#define PCMK__XA_ST_CALLID              "st_callid"
#define PCMK__XA_ST_CALLDATA            "st_calldata"
#define PCMK__XA_ST_CALLOPT             "st_callopt"
#define PCMK__XA_ST_CLIENTID            "st_clientid"
#define PCMK__XA_ST_CLIENTNAME          "st_clientname"
#define PCMK__XA_ST_CLIENTNODE          "st_clientnode"
#define PCMK__XA_ST_DATE                "st_date"
#define PCMK__XA_ST_DATE_NSEC           "st_date_nsec"
#define PCMK__XA_ST_DELAY               "st_delay"
#define PCMK__XA_ST_DELAY_BASE          "st_delay_base"
#define PCMK__XA_ST_DELAY_MAX           "st_delay_max"
#define PCMK__XA_ST_DELEGATE            "st_delegate"
#define PCMK__XA_ST_DEVICE_ACTION       "st_device_action"
#define PCMK__XA_ST_DEVICE_ID           "st_device_id"
#define PCMK__XA_ST_DEVICE_SUPPORT_FLAGS    "st_device_support_flags"
#define PCMK__XA_ST_DIFFERENTIAL        "st_differential"
#define PCMK__XA_ST_MONITOR_VERIFIED    "st_monitor_verified"
#define PCMK__XA_ST_NOTIFY_ACTIVATE     "st_notify_activate"
#define PCMK__XA_ST_NOTIFY_DEACTIVATE   "st_notify_deactivate"
#define PCMK__XA_ST_OP                  "st_op"
#define PCMK__XA_ST_ORIGIN              "st_origin"
#define PCMK__XA_ST_OUTPUT              "st_output"
#define PCMK__XA_ST_RC                  "st_rc"
#define PCMK__XA_ST_REMOTE_OP           "st_remote_op"
#define PCMK__XA_ST_REMOTE_OP_RELAY     "st_remote_op_relay"
#define PCMK__XA_ST_REQUIRED            "st_required"
#define PCMK__XA_ST_STATE               "st_state"
#define PCMK__XA_ST_TARGET              "st_target"
#define PCMK__XA_ST_TIMEOUT             "st_timeout"
#define PCMK__XA_ST_TOLERANCE           "st_tolerance"
#define PCMK__XA_SUBT                   "subt"                  // subtype
#define PCMK__XA_T                      "t"                     // type
#define PCMK__XA_TRANSITION_KEY         "transition-key"
#define PCMK__XA_TRANSITION_MAGIC       "transition-magic"
#define PCMK__XA_UPTIME                 "uptime"

// @COMPAT Used only with v1 patchsets
#define PCMK__XA_CRM_DIFF_MARKER        "__crm_diff_marker__"

// @COMPAT Deprecated since 2.1.5
#define PCMK__XA_FIRST_INSTANCE         "first-instance"

// @COMPAT Deprecated since 2.1.7
#define PCMK__XA_ORDERING               "ordering"

// @COMPAT Deprecated alias for PCMK_XA_PROMOTED_MAX since 2.0.0
#define PCMK__XA_PROMOTED_MAX_LEGACY    "masters"

// @COMPAT Deprecated alias for PCMK_XA_PROMOTED_ONLY since 2.0.0
#define PCMK__XA_PROMOTED_ONLY_LEGACY   "master_only"

// @COMPAT Deprecated since 1.1.12
#define PCMK__XA_REF                    "ref"

// @COMPAT Deprecated since 2.1.6
#define PCMK__XA_REPLACE                "replace"

// @COMPAT Deprecated alias for \c PCMK_XA_AUTOMATIC since 1.1.14
#define PCMK__XA_REQUIRED               "required"

// @COMPAT Deprecated since 2.1.5
#define PCMK__XA_RSC_INSTANCE           "rsc-instance"

// @COMPAT Deprecated since 2.1.5
#define PCMK__XA_THEN_INSTANCE          "then-instance"

// @COMPAT Deprecated since 2.1.5
#define PCMK__XA_WITH_RSC_INSTANCE      "with-rsc-instance"


#ifdef __cplusplus
}
#endif

#endif // PCMK__CRM_COMMON_XML_NAMES_INTERNAL__H
