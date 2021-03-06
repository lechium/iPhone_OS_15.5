//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSKeyedUnarchiver.h>

@class NSArray, NSDictionary, NSString, NSURL, SCNAssetCatalog;

@interface SCNKeyedUnarchiver : NSKeyedUnarchiver
{
    NSURL *_documentURL;	// 8 = 0x8
    NSDictionary *_context;	// 16 = 0x10
    SCNAssetCatalog *_assetCatalog;	// 24 = 0x18
    NSString *_lookUpKey;	// 32 = 0x20
    id _lookUpFoundInstance;	// 40 = 0x28
    NSArray *_currentMorphTargets;	// 48 = 0x30
}

@property(retain, nonatomic) NSArray *currentMorphTargets; // @synthesize currentMorphTargets=_currentMorphTargets;
@property(retain, nonatomic) id lookUpFoundInstance; // @synthesize lookUpFoundInstance=_lookUpFoundInstance;
@property(retain, nonatomic) NSString *lookUpKey; // @synthesize lookUpKey=_lookUpKey;
@property(retain, nonatomic) SCNAssetCatalog *assetCatalog; // @synthesize assetCatalog=_assetCatalog;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(retain, nonatomic) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property(readonly, nonatomic) NSURL *documentEnclosingURL;
- (void)dealloc;	// IMP=0x0000000000283f38
- (id)initForReadingWithData:(id)arg1 secure:(_Bool)arg2;	// IMP=0x0000000000283ec6

@end

