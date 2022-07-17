//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPContainerCoalescingToken-Protocol.h>

@class MSPContainer, NSString;
@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface MSPContainerCoalescingToken : NSObject <MSPContainerCoalescingToken>
{
    MSPContainer *_container;	// 8 = 0x8
    id <NSObject><NSCopying> _context;	// 16 = 0x10
    _Bool _invalidated;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009a856
- (void)dealloc;	// IMP=0x000000000009a80f
- (void)endCoalescingEdits;	// IMP=0x000000000009a7cd
- (id)initWithContainerOwner:(id)arg1 context:(id)arg2;	// IMP=0x000000000009a729
- (id)init;	// IMP=0x000000000009a6ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
