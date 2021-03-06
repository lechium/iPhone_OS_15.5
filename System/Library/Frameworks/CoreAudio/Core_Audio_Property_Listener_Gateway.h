//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreAudio/Core_Audio_Property_Listener-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface Core_Audio_Property_Listener_Gateway <Core_Audio_Property_Listener>
{
    void *_list_ptr;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_notification_queue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002470ec
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notification_queue; // @synthesize notification_queue=_notification_queue;
@property(nonatomic) void *list_ptr; // @synthesize list_ptr=_list_ptr;
- (void)handle_server_reconnected;	// IMP=0x0000000000247076
- (void)handle_server_disconnected;	// IMP=0x0000000000246f9a
- (void)synchronously_notify_listeners_of_object:(unsigned int)arg1 about_changes_to_properties:(const void *)arg2;	// IMP=0x0000000000246f6b
- (void)notify_listeners_of_object:(unsigned int)arg1 about_changes_to_properties:(const void *)arg2;	// IMP=0x0000000000246e34
- (void)handle_property_changes:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000246d9d
- (void)handle_property_changes:(id)arg1;	// IMP=0x0000000000245b7f
- (void)remove_listeners_for_device_id:(unsigned int)arg1;	// IMP=0x0000000000245ad4
- (void)remove_listener_with_token:(unsigned long long)arg1;	// IMP=0x0000000000245986
- (void)remove_listener_for_property_id:(struct Property_Identity)arg1 with_listener_block:(CDUnknownBlockType)arg2 and_queue:(id)arg3;	// IMP=0x00000000002456c4
- (void)remove_listener_for_property_id:(struct Property_Identity)arg1 with_listener_proc:(CDUnknownFunctionPointerType)arg2 and_user_data:(void *)arg3;	// IMP=0x000000000024554d
- (unsigned long long)add_listener_for_property_id:(struct Property_Identity)arg1 with_listener_block:(CDUnknownBlockType)arg2 and_queue:(id)arg3;	// IMP=0x00000000002452d6
- (unsigned long long)add_listener_for_property_id:(struct Property_Identity)arg1 with_listener_proc:(CDUnknownFunctionPointerType)arg2 and_user_data:(void *)arg3;	// IMP=0x00000000002451b1
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000002450fa
@property(readonly, nonatomic) void *list;
- (void)release_resources;	// IMP=0x0000000000245055
- (void)dealloc;	// IMP=0x0000000000244f75
- (id)initWithObjectMap:(shared_ptr_a1e71f47)arg1;	// IMP=0x0000000000244d54

@end

