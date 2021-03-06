//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PXSettingsIndex : NSObject
{
    NSArray *_entries;	// 8 = 0x8
}

+ (id)_entriesForSettingsController:(id)arg1 usingProgress:(id)arg2;	// IMP=0x000000000022ab89
+ (id)createIndexForSettings:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000022aa62
- (void).cxx_destruct;	// IMP=0x000000000022a50d
@property(readonly, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (id)searchForText:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000022a38f
- (id)_initWithEntries:(id)arg1;	// IMP=0x000000000022a31c
- (id)init;	// IMP=0x000000000022a2a2

@end

