//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityUIUtilities/AXDragEndpointVendorDelegate-Protocol.h>
#import <AccessibilityUIUtilities/AXDragSessionDelegate-Protocol.h>
#import <AccessibilityUIUtilities/AXDragSessionDragManager-Protocol.h>
#import <AccessibilityUIUtilities/NSXPCListenerDelegate-Protocol.h>

@class AXDispatchTimer, AXDragEndpointVendor, AXDragSession, NSMutableArray, NSString, NSXPCListener;
@protocol AXDragManagerDelegate, OS_dispatch_queue;

@interface AXDragManager : NSObject <AXDragEndpointVendorDelegate, NSXPCListenerDelegate, AXDragSessionDragManager, AXDragSessionDelegate>
{
    AXDragEndpointVendor *_vendor;	// 8 = 0x8
    NSXPCListener *_endpointListener;	// 16 = 0x10
    NSMutableArray *_activeSessions;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dragStateQueue;	// 32 = 0x20
    int _pidForDrag;	// 40 = 0x28
    id <AXDragManagerDelegate> _delegate;	// 48 = 0x30
    NSString *_machServiceName;	// 56 = 0x38
    CDUnknownBlockType _dragStartCompletionHandler;	// 64 = 0x40
    AXDispatchTimer *_dragStartTimer;	// 72 = 0x48
    AXDragSession *_dragSession;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000096db
@property(retain, nonatomic) AXDragSession *dragSession; // @synthesize dragSession=_dragSession;
@property(retain, nonatomic) AXDispatchTimer *dragStartTimer; // @synthesize dragStartTimer=_dragStartTimer;
@property(copy, nonatomic) CDUnknownBlockType dragStartCompletionHandler; // @synthesize dragStartCompletionHandler=_dragStartCompletionHandler;
@property(nonatomic) int pidForDrag; // @synthesize pidForDrag=_pidForDrag;
@property(readonly, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property(nonatomic) __weak id <AXDragManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dragSessionWasTerminated:(id)arg1;	// IMP=0x000000000000949d
- (void)dragSessionEnded:(id)arg1 withOperation:(unsigned long long)arg2;	// IMP=0x00000000000092db
- (void)dragSessionChanged:(id)arg1 toStatus:(id)arg2;	// IMP=0x00000000000090a0
- (void)dragSession:(id)arg1 movedToPoint:(struct CGPoint)arg2 byRequestor:(id)arg3;	// IMP=0x0000000000008ec4
- (void)moveToAndDropAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000008c03
- (void)drop;	// IMP=0x0000000000008b42
- (void)moveToPoint:(struct CGPoint)arg1;	// IMP=0x00000000000089b4
- (void)cancelDrag;	// IMP=0x00000000000088ee
@property(readonly, nonatomic) _Bool isDragActive;
- (void)waitForDragStartFromPid:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008401
- (id)endpointForRequestingConnection:(id)arg1 fromEndpointVendor:(id)arg2;	// IMP=0x0000000000008321
- (_Bool)_shouldAllowEndpointVendForRequestingConnection:(id)arg1;	// IMP=0x00000000000080a4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000007c8f
- (void)sessionWasTerminated:(id)arg1;	// IMP=0x0000000000007c79
- (id)initWithMachServiceName:(id)arg1;	// IMP=0x0000000000007ab8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
