//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITextDragFinishState-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITextDragFinishState : NSObject <UITextDragFinishState>
{
    _Bool _dragTearoffOccured;	// 8 = 0x8
    struct CGPoint _location;	// 16 = 0x10
}

@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(nonatomic) _Bool dragTearoffOccured; // @synthesize dragTearoffOccured=_dragTearoffOccured;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
