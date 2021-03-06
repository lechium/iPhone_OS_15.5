//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ClipDownloadVariant, NSNumber, NSString, VariantDescriptor;

@interface ClipDownloadData : NSObject
{
    NSString *_appID;	// 8 = 0x8
    NSString *_appName;	// 16 = 0x10
    NSString *_artistName;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    NSNumber *_externalVersionID;	// 40 = 0x28
    NSString *_parentBundleID;	// 48 = 0x30
    NSString *_ratingLabel;	// 56 = 0x38
    NSNumber *_ratingRank;	// 64 = 0x40
    ClipDownloadVariant *_variant;	// 72 = 0x48
    VariantDescriptor *_variantDescriptor;	// 80 = 0x50
}

+ (id)_findMostCompatibleVariantForDevice:(id)arg1 fromArray:(id)arg2 matchedVariant:(id *)arg3;	// IMP=0x004000000007e15d
- (void).cxx_destruct;	// IMP=0x002000000007e573
@property(readonly) VariantDescriptor *variantDescriptor; // @synthesize variantDescriptor=_variantDescriptor;
@property(readonly) ClipDownloadVariant *variant; // @synthesize variant=_variant;
@property(readonly) NSNumber *ratingRank; // @synthesize ratingRank=_ratingRank;
@property(readonly) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(readonly) NSString *parentBundleID; // @synthesize parentBundleID=_parentBundleID;
@property(readonly) NSNumber *externalVersionID; // @synthesize externalVersionID=_externalVersionID;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly) NSString *appName; // @synthesize appName=_appName;
@property(readonly) NSString *appID; // @synthesize appID=_appID;
- (id)description;	// IMP=0x001000000007dfd5
- (id)initWithRequest:(id)arg1 forDevice:(id)arg2;	// IMP=0x001000000007df58
- (id)initWithDictionary:(id)arg1 forDevice:(id)arg2;	// IMP=0x001000000007d961

@end

