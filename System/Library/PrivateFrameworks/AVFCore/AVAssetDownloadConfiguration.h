//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/NSSecureCoding-Protocol.h>

@class AVAssetDownloadContentConfiguration, AVURLAsset, NSArray, NSData, NSString;

@interface AVAssetDownloadConfiguration : NSObject <NSSecureCoding>
{
    AVURLAsset *_asset;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSData *_artworkData;	// 24 = 0x18
    AVAssetDownloadContentConfiguration *_primaryContentConfiguration;	// 32 = 0x20
    NSArray *_auxiliaryContentConfigurations;	// 40 = 0x28
    _Bool optimizesAuxiliaryContentConfigurations;	// 48 = 0x30
    _Bool _optimizesAuxiliaryContentConfigurations;	// 49 = 0x31
}

+ (id)downloadConfigurationWithAsset:(id)arg1 title:(id)arg2;	// IMP=0x000000000004d9bb
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004e1a8
@property(nonatomic) _Bool optimizesAuxiliaryContentConfigurations; // @synthesize optimizesAuxiliaryContentConfigurations=_optimizesAuxiliaryContentConfigurations;
@property(copy, nonatomic) NSArray *auxiliaryContentConfigurations; // @synthesize auxiliaryContentConfigurations=_auxiliaryContentConfigurations;
@property(readonly, nonatomic) AVAssetDownloadContentConfiguration *primaryContentConfiguration; // @synthesize primaryContentConfiguration=_primaryContentConfiguration;
@property(copy, nonatomic) NSData *artworkData; // @synthesize artworkData=_artworkData;
- (void)dealloc;	// IMP=0x000000000004d9ef
- (id)initWithAsset:(id)arg1 title:(id)arg2;	// IMP=0x000000000004d846
- (id)_asset;	// IMP=0x000000000004dc6f
- (id)_serializableRepresentation;	// IMP=0x000000000004da9c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004de0d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004dc86

@end
