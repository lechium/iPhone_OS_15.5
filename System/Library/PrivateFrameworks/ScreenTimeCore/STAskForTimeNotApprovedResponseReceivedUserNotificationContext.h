//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface STAskForTimeNotApprovedResponseReceivedUserNotificationContext
{
    NSString *_parentName;	// 8 = 0x8
    NSString *_requestedResourceName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000074f8
- (void).cxx_destruct;	// IMP=0x00000000000077a7
@property(copy, nonatomic) NSString *requestedResourceName; // @synthesize requestedResourceName=_requestedResourceName;
@property(copy, nonatomic) NSString *parentName; // @synthesize parentName=_parentName;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007500
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007459
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000736a
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 parentName:(id)arg2 requestedResourceName:(id)arg3;	// IMP=0x000000000000729d

@end
