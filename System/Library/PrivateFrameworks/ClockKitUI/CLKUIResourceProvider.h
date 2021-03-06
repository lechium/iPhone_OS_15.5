//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSNumber, NSSet;
@protocol CLKUIResourceProviderDelegate;

@interface CLKUIResourceProvider : NSObject
{
    NSMutableSet *_uuidHistory;	// 8 = 0x8
    id <CLKUIResourceProviderDelegate> _delegate;	// 16 = 0x10
    NSNumber *_key;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000004590
@property(readonly, nonatomic) NSNumber *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSSet *uuidHistory; // @synthesize uuidHistory=_uuidHistory;
@property(readonly, nonatomic) __weak id <CLKUIResourceProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addUuidToHistory:(id)arg1;	// IMP=0x0000000000004550
- (id)initWithDelegate:(id)arg1 key:(id)arg2;	// IMP=0x00000000000044a4

@end

