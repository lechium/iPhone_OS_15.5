//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserActivity;

@interface SGEventActivity : NSObject
{
    unsigned char _type;	// 8 = 0x8
    NSString *_teamIdentifier;	// 16 = 0x10
    NSUserActivity *_userActivity;	// 24 = 0x18
    double _validStartDate;	// 32 = 0x20
    double _validEndDate;	// 40 = 0x28
}

+ (unsigned char)typeForString:(id)arg1;	// IMP=0x0000000000020a09
+ (id)describeType:(unsigned char)arg1;	// IMP=0x00000000000209ee
- (void).cxx_destruct;	// IMP=0x0000000000020961
@property(readonly, nonatomic) double validEndDate; // @synthesize validEndDate=_validEndDate;
@property(readonly, nonatomic) double validStartDate; // @synthesize validStartDate=_validStartDate;
@property(readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
- (id)jsonObject;	// IMP=0x00000000000206a5
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000204f2
- (id)initWithTeamIdentifier:(id)arg1 type:(unsigned char)arg2 userActivity:(id)arg3 validStartDate:(double)arg4 validEndDate:(double)arg5;	// IMP=0x000000000002042f

@end

