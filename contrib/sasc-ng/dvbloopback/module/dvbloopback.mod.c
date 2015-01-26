#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5358b4ed, "module_layout" },
	{ 0xfe1c648f, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x15692c87, "param_ops_int" },
	{ 0xadc09c50, "dvb_unregister_adapter" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x78e01c16, "dvb_register_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x2caa7919, "remove_proc_entry" },
	{ 0x87442d82, "filp_close" },
	{ 0x181af9d0, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x91715312, "sprintf" },
	{ 0xf432dd3d, "__init_waitqueue_head" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xfb578fc5, "memset" },
	{ 0xdf1e1c2c, "proc_mkdir" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0xb2d307de, "param_ops_short" },
	{ 0x353d11fe, "current_task" },
	{ 0xffc62a32, "mutex_lock_interruptible" },
	{ 0xd74c8f46, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x31b31a53, "platform_device_alloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x640d07ee, "platform_device_add" },
	{ 0x90d9ad73, "dvb_generic_release" },
	{ 0xb264abed, "mutex_lock" },
	{ 0x69ecba68, "platform_device_unregister" },
	{ 0x4034b9db, "dvb_unregister_device" },
	{ 0x7eea8fc, "module_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x6187939e, "dvb_generic_open" },
	{ 0x1ebaf23a, "create_proc_entry" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd2f05e7d, "dvb_register_adapter" },
	{ 0xf2b09e86, "kmem_cache_alloc_trace" },
	{ 0xcf21d241, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xd07973a6, "remap_pfn_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5c8b5ce8, "prepare_to_wait" },
	{ 0x4845c423, "param_array_ops" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x920b2380, "vmalloc_to_page" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x7248c95c, "try_module_get" },
	{ 0x8eb06e34, "platform_device_put" },
	{ 0x7353d537, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core";


MODULE_INFO(srcversion, "487FC37890CC3C28499C581");
