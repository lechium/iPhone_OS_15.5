//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SeparationAlerts/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface SAPersistenceStore : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_monitoringSessionRecord;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005b01
- (void).cxx_destruct;	// IMP=0x0000000000005c67
@property(retain, nonatomic) NSMutableDictionary *monitoringSessionRecord; // @synthesize monitoringSessionRecord=_monitoringSessionRecord;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005c29
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005b09
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000059ca

@end

