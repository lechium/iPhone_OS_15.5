//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString;

@interface ASDPurgeAppsRequestOptions
{
    _Bool _offloadOnly;	// 8 = 0x8
    _Bool _performAvailablityCheck;	// 9 = 0x9
    NSArray *_apps;	// 16 = 0x10
    NSNumber *_desiredPurgeAmount;	// 24 = 0x18
    long long _urgency;	// 32 = 0x20
    NSString *_volume;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002e292
- (void).cxx_destruct;	// IMP=0x000000000002e7b0
@property(copy, nonatomic) NSString *volume; // @synthesize volume=_volume;
@property(nonatomic) long long urgency; // @synthesize urgency=_urgency;
@property(nonatomic) _Bool performAvailablityCheck; // @synthesize performAvailablityCheck=_performAvailablityCheck;
@property(nonatomic) _Bool offloadOnly; // @synthesize offloadOnly=_offloadOnly;
@property(copy, nonatomic) NSNumber *desiredPurgeAmount; // @synthesize desiredPurgeAmount=_desiredPurgeAmount;
@property(copy, nonatomic) NSArray *apps; // @synthesize apps=_apps;
- (id)description;	// IMP=0x000000000002e5d3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002e462
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002e29a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002e1a3
- (id)initWithVolume:(id)arg1 urgency:(long long)arg2;	// IMP=0x000000000002e123

@end

