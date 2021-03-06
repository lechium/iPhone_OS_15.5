//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSNumber, NSString;

@interface EDAMContact
{
    NSString *_name;	// 8 = 0x8
    NSString *_id;	// 16 = 0x10
    NSNumber *_type;	// 24 = 0x18
    NSString *_photoUrl;	// 32 = 0x20
    NSNumber *_photoLastUpdated;	// 40 = 0x28
    NSData *_messagingPermit;	// 48 = 0x30
    NSNumber *_messagingPermitExpires;	// 56 = 0x38
}

+ (id)structFields;	// IMP=0x000000000022f1bd
+ (id)structName;	// IMP=0x000000000022f1b0
- (void).cxx_destruct;	// IMP=0x000000000022f4f5
@property(retain, nonatomic) NSNumber *messagingPermitExpires; // @synthesize messagingPermitExpires=_messagingPermitExpires;
@property(retain, nonatomic) NSData *messagingPermit; // @synthesize messagingPermit=_messagingPermit;
@property(retain, nonatomic) NSNumber *photoLastUpdated; // @synthesize photoLastUpdated=_photoLastUpdated;
@property(retain, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end

