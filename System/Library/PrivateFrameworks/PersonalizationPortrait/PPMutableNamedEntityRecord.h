//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PPNamedEntity, PPNamedEntityMetadata, PPSource;

@interface PPMutableNamedEntityRecord
{
}

@property(retain, nonatomic) PPNamedEntityMetadata *metadata; // @dynamic metadata;
@property(nonatomic) double sentimentScore; // @dynamic sentimentScore;
@property(nonatomic) unsigned char changeType; // @dynamic changeType;
@property(nonatomic) unsigned int extractionAssetVersion; // @dynamic extractionAssetVersion;
@property(retain, nonatomic) NSString *extractionOsBuild; // @dynamic extractionOsBuild;
@property(nonatomic) double decayRate; // @dynamic decayRate;
@property(nonatomic) double initialScore; // @dynamic initialScore;
@property(nonatomic) unsigned long long algorithm; // @dynamic algorithm;
@property(retain, nonatomic) PPSource *source; // @dynamic source;
@property(retain, nonatomic) PPNamedEntity *entity; // @dynamic entity;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008200
- (id)init;	// IMP=0x00000000000081c5

@end

