//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface RTTDictionaryManager : NSObject
{
    NSArray *_availableDictionaries;	// 8 = 0x8
}

+ (id)_availableDictionaryAssetsUsingRemoteInfo:(_Bool)arg1;	// IMP=0x0000000000010328
- (void).cxx_destruct;	// IMP=0x000000000001043c
@property(retain, nonatomic) NSArray *availableDictionaries; // @synthesize availableDictionaries=_availableDictionaries;
- (id)_ttyDictionaryAsset;	// IMP=0x000000000001013a
- (void)_downloadAsset:(id)arg1;	// IMP=0x000000000000ff61
- (void)deleteIfNeeded;	// IMP=0x000000000000fbe6
- (void)downloadIfNeeded;	// IMP=0x000000000000faaa
- (void)dealloc;	// IMP=0x000000000000fa6a
- (id)init;	// IMP=0x000000000000f9e5

@end
