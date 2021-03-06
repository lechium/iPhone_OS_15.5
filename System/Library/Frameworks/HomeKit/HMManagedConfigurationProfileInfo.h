//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface HMManagedConfigurationProfileInfo : HMFObject <NSSecureCoding, NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    NSData *_profileData;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001296a
- (void).cxx_destruct;	// IMP=0x0000000000012939
@property(readonly) NSData *profileData; // @synthesize profileData=_profileData;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012902
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001281d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001276f
- (id)initWithIdentifier:(id)arg1 profileData:(id)arg2;	// IMP=0x00000000000126cd

@end

