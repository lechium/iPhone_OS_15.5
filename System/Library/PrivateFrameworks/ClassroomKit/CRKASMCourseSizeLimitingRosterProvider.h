//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRKASMCourseSizeLimitingRosterProvider
{
    long long _maxUserCount;	// 8 = 0x8
    long long _maxTrustedUserCount;	// 16 = 0x10
}

@property(readonly, nonatomic) long long maxTrustedUserCount; // @synthesize maxTrustedUserCount=_maxTrustedUserCount;
@property(readonly, nonatomic) long long maxUserCount; // @synthesize maxUserCount=_maxUserCount;
- (id)courseForIdentifier:(id)arg1;	// IMP=0x00000000000312ca
- (_Bool)isLegalToUpdateCourse:(id)arg1 withProperties:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000031073
- (void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030f45
- (void)createCourseWithProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030e3d
- (id)initWithRosterProvider:(id)arg1 maxUserCount:(long long)arg2 maxTrustedUserCount:(long long)arg3;	// IMP=0x0000000000030de7

@end

