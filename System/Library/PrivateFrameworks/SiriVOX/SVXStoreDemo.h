//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/NSCopying-Protocol.h>
#import <SiriVOX/NSSecureCoding-Protocol.h>

@class NSString;

@interface SVXStoreDemo : NSObject <NSCopying, NSSecureCoding>
{
    float _outputVolume;	// 8 = 0x8
    long long _transcriptID;	// 16 = 0x10
    NSString *_languageCode;	// 24 = 0x18
    long long _gender;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004f931
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000000004fe3a
- (void).cxx_destruct;	// IMP=0x000000000004fbe8
@property(readonly, nonatomic) float outputVolume; // @synthesize outputVolume=_outputVolume;
@property(readonly, nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) long long transcriptID; // @synthesize transcriptID=_transcriptID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004faa8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004f939
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004f926
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004f80c
- (unsigned long long)hash;	// IMP=0x000000000004f721
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x000000000004f486
- (id)description;	// IMP=0x000000000004f472
- (id)initWithTranscriptID:(long long)arg1 languageCode:(id)arg2 gender:(long long)arg3 outputVolume:(float)arg4;	// IMP=0x000000000004f3da
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x000000000004fea9

@end
