//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUICacheCoding-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface SKUICompletionList : NSObject <SKUICacheCoding>
{
    NSArray *_completions;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000288abd
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *completions; // @synthesize completions=_completions;
@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;	// IMP=0x00000000002888ac
- (id)initWithCompletionListDictionary:(id)arg1;	// IMP=0x00000000002885d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

