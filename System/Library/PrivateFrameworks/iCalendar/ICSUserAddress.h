//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICSAlternateTimeProposal, ICSDateValue, NSString;

@interface ICSUserAddress
{
}

+ (id)ICSStringFromRole:(int)arg1;	// IMP=0x0000000000016758
+ (id)ICSStringFromScheduleForceSend:(int)arg1;	// IMP=0x0000000000016734
+ (id)ICSStringFromScheduleStatus:(int)arg1;	// IMP=0x000000000001669c
+ (id)ICSStringFromScheduleAgent:(int)arg1;	// IMP=0x0000000000016678
+ (id)ICSStringFromParticipationStatus:(int)arg1;	// IMP=0x00000000000165ec
+ (id)ICSStringFromCalendarUser:(int)arg1;	// IMP=0x0000000000016590
+ (int)roleFromICSString:(id)arg1;	// IMP=0x00000000000164d4
+ (int)scheduleForceSendFromICSString:(id)arg1;	// IMP=0x000000000001646d
+ (int)scheduleAgentFromICSString:(id)arg1;	// IMP=0x0000000000016406
+ (int)scheduleStatusFromICSString:(id)arg1;	// IMP=0x00000000000162a4
+ (int)participationStatusFromICSString:(id)arg1;	// IMP=0x0000000000016168
+ (int)calendarUserFromICSString:(id)arg1;	// IMP=0x00000000000160ac
+ (id)URLForNoMail;	// IMP=0x000000000001832b
- (_Bool)shouldObscureValue;	// IMP=0x00000000000182af
- (id)parametersToObscure;	// IMP=0x000000000001827d
- (id)propertiesToObscure;	// IMP=0x0000000000018275
- (id)x_calendarserver_email;	// IMP=0x0000000000018263
- (void)setX_calendarserver_email:(id)arg1;	// IMP=0x0000000000018251
@property(nonatomic) ICSAlternateTimeProposal *alternateTimeProposal;
@property(retain, nonatomic) NSString *x_apple_inviterName;
@property(retain, nonatomic) NSString *likenessDataString;
@property(retain, nonatomic) NSString *x_apple_telephone;
@property(retain, nonatomic) NSString *email;
@property(nonatomic) _Bool x_apple_self_invited;
@property(retain, nonatomic) ICSDateValue *partstatModified;
@property(nonatomic) _Bool rsvp;
@property(nonatomic) int role;
@property(nonatomic) int scheduleforcesend;
@property(nonatomic) int scheduleagent;
@property(nonatomic) int schedulestatus;
@property(nonatomic) int partstat;
@property(retain, nonatomic) NSString *dir;
@property(nonatomic) int cutype;
@property(retain, nonatomic) NSString *cn;
- (id)displayName;	// IMP=0x00000000000174a5
- (id)phoneNumber;	// IMP=0x00000000000173ec
- (id)emailAddress;	// IMP=0x000000000001730e
- (_Bool)isPhoneNumber;	// IMP=0x0000000000017288
- (_Bool)hasPhoneNumber;	// IMP=0x000000000001723d
- (_Bool)isHTTPSAddress;	// IMP=0x0000000000017171
- (_Bool)isHTTPAddress;	// IMP=0x00000000000170a5
- (_Bool)isEmailAddress;	// IMP=0x0000000000016fd9
- (_Bool)hasEmailAddress;	// IMP=0x0000000000016f8e
- (id)initWithPhoneNumber:(id)arg1;	// IMP=0x0000000000016d29
- (id)initWithEmailAddress:(id)arg1;	// IMP=0x0000000000016aa1
- (id)sanitizeAddressString:(id)arg1;	// IMP=0x0000000000016840
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000167b4
- (void)fixAddress;	// IMP=0x000000000001288a
- (void)setURL:(id)arg1;	// IMP=0x00000000000182b7

@end
