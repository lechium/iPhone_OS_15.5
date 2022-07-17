//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityUIUtilities/_DUIClientSessionAccessibility-Protocol.h>

@class NSXPCConnection;
@protocol AXDragSessionDelegate, AXDragSessionDragManager;

@interface AXDragSession : NSObject <_DUIClientSessionAccessibility>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <AXDragSessionDragManager> _manager;	// 16 = 0x10
    _Bool _resumed;	// 24 = 0x18
    _Bool _aborted;	// 25 = 0x19
    id <AXDragSessionDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000312d4
@property(nonatomic) __weak id <AXDragSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setManager:(id)arg1;	// IMP=0x000000000003129c
- (id)manager;	// IMP=0x000000000003128e
- (void)moveToPoint:(struct CGPoint)arg1 forRequestor:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003117f
- (void)cancel;	// IMP=0x0000000000031126
- (void)drop;	// IMP=0x00000000000310e9
- (void)abort;	// IMP=0x0000000000031066
- (void)resume;	// IMP=0x0000000000031041
- (oneway void)dragDidEndWithOperation:(unsigned long long)arg1;	// IMP=0x0000000000030fe0
- (oneway void)dragStatusDidChange:(id)arg1;	// IMP=0x0000000000030f6b
- (oneway void)dragWillBeginWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030f59
- (id)_serverSession;	// IMP=0x0000000000030f43
- (id)initWithDruidConnection:(id)arg1;	// IMP=0x0000000000030d47

@end
