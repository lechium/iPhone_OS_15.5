//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TipsCore/NSCopying-Protocol.h>
#import <TipsCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSError, NSString, TPSDocument, TPSMonitoringEvents;

@interface TPSMiniTipMetadata : NSObject <NSSecureCoding, NSCopying>
{
    long long _customizationID;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSDictionary *_userInfo;	// 24 = 0x18
    TPSDocument *_content;	// 32 = 0x20
    TPSMonitoringEvents *_monitoringEvents;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004ff07
- (void).cxx_destruct;	// IMP=0x0000000000050732
@property(copy, nonatomic) TPSMonitoringEvents *monitoringEvents; // @synthesize monitoringEvents=_monitoringEvents;
@property(copy, nonatomic) TPSDocument *content; // @synthesize content=_content;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long customizationID; // @synthesize customizationID=_customizationID;
- (id)debugDescription;	// IMP=0x0000000000050492
- (id)description;	// IMP=0x00000000000503ad
@property(readonly, copy, nonatomic) NSString *identifier; // @dynamic identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000050221
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000500a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004ff88
- (id)initWithContent:(id)arg1;	// IMP=0x000000000004ff0f

@end

