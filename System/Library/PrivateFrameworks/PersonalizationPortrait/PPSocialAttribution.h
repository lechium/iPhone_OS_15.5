//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString, NSURL, PPSocialPerson;

@interface PPSocialAttribution : NSObject <NSSecureCoding>
{
    _Bool _starred;	// 8 = 0x8
    _Bool _fromMe;	// 9 = 0x9
    NSString *_identifier;	// 16 = 0x10
    NSString *_sourceAppDisplayName;	// 24 = 0x18
    NSString *_conversationIdentifier;	// 32 = 0x20
    NSURL *_groupPhotoPath;	// 40 = 0x28
    NSString *_groupDisplayName;	// 48 = 0x30
    NSArray *_relatedPeople;	// 56 = 0x38
    PPSocialPerson *_sender;	// 64 = 0x40
    NSDate *_timestamp;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000297b1
- (void).cxx_destruct;	// IMP=0x0000000000029747
@property(readonly, nonatomic, getter=isFromMe) _Bool fromMe; // @synthesize fromMe=_fromMe;
@property(readonly, nonatomic, getter=isStarred) _Bool starred; // @synthesize starred=_starred;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) PPSocialPerson *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) NSArray *relatedPeople; // @synthesize relatedPeople=_relatedPeople;
@property(readonly, nonatomic) NSString *groupDisplayName; // @synthesize groupDisplayName=_groupDisplayName;
@property(readonly, nonatomic) NSURL *groupPhotoPath; // @synthesize groupPhotoPath=_groupPhotoPath;
@property(readonly, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(readonly, nonatomic) NSString *sourceAppDisplayName; // @synthesize sourceAppDisplayName=_sourceAppDisplayName;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029127
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000029011
- (id)description;	// IMP=0x0000000000028e58
- (id)initWithIdentifier:(id)arg1 sourceAppDisplayName:(id)arg2 conversationIdentifier:(id)arg3 groupPhotoPath:(id)arg4 groupDisplayName:(id)arg5 relatedPeople:(id)arg6 sender:(id)arg7 timestamp:(id)arg8 starred:(_Bool)arg9 fromMe:(_Bool)arg10;	// IMP=0x0000000000028cea
- (id)initWithIdentifier:(id)arg1 sourceAppDisplayName:(id)arg2 conversationIdentifier:(id)arg3 groupPhotoPath:(id)arg4 groupDisplayName:(id)arg5 relatedPeople:(id)arg6 sender:(id)arg7 timestamp:(id)arg8 starred:(_Bool)arg9;	// IMP=0x0000000000028cae
- (id)initWithIdentifier:(id)arg1 sourceAppDisplayName:(id)arg2 conversationIdentifier:(id)arg3 groupPhotoPath:(id)arg4 groupDisplayName:(id)arg5 relatedPeople:(id)arg6 sender:(id)arg7 timestamp:(id)arg8;	// IMP=0x0000000000028c78

@end
