//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface UPPManifestItem : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000004f7da
@property(readonly) NSString *title;
@property(readonly) NSData *receiptData;
@property(readonly) NSDictionary *thinnedAssetsCategorized;
@property(readonly) NSArray *thinnedAssets;
@property(readonly) NSString *subtitle;
@property(readonly) NSString *platformIdentifier;
@property(readonly) _Bool launchProhibited;
@property(readonly) NSString *kind;
@property(readonly) _Bool hasMessagesExtension;
@property(readonly) NSString *bundleVersion;
@property(readonly) NSString *bundleID;
@property(readonly) NSDictionary *assetsCategorized;
@property(readonly) NSArray *assets;
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000004f232

@end
