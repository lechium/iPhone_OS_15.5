//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PHASEMetaParameter;

@interface PHASEMixer : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    double _gain;	// 16 = 0x10
    PHASEMetaParameter *_gainMetaParameter;	// 24 = 0x18
}

+ (id)new;	// IMP=0x00000000000c5a91
- (void).cxx_destruct;	// IMP=0x00000000000c5bab
@property(readonly, nonatomic) PHASEMetaParameter *gainMetaParameter; // @synthesize gainMetaParameter=_gainMetaParameter;
@property(readonly, nonatomic) double gain; // @synthesize gain=_gain;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000c5ada
- (id)initWithUID:(id)arg1;	// IMP=0x00000000000c5ac8
- (void)setUid:(id)arg1;	// IMP=0x00000000000c5ab7
@property(readonly, nonatomic) NSString *uid; // @dynamic uid;
- (id)init;	// IMP=0x00000000000c5a53

@end

