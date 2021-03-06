//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBSectionIcon, BBSectionSubtypeParameters, NSMutableDictionary, NSString, NSUUID;

@interface BBSectionParameters : NSObject <NSSecureCoding>
{
    _Bool _showsSubtitle;	// 8 = 0x8
    _Bool _usesVariableLayout;	// 9 = 0x9
    _Bool _orderSectionUsingRecencyDate;	// 10 = 0xa
    _Bool _showsDateInFloatingLockScreenAlert;	// 11 = 0xb
    unsigned long long _messageNumberOfLines;	// 16 = 0x10
    BBSectionSubtypeParameters *_defaultSubtypeParameters;	// 24 = 0x18
    NSMutableDictionary *_allSubtypeParameters;	// 32 = 0x20
    NSString *_displayName;	// 40 = 0x28
    BBSectionIcon *_icon;	// 48 = 0x30
    NSUUID *_UUID;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000499be
- (void).cxx_destruct;	// IMP=0x000000000004a26a
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) BBSectionIcon *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSMutableDictionary *allSubtypeParameters; // @synthesize allSubtypeParameters=_allSubtypeParameters;
@property(retain, nonatomic) BBSectionSubtypeParameters *defaultSubtypeParameters; // @synthesize defaultSubtypeParameters=_defaultSubtypeParameters;
@property(nonatomic) _Bool showsDateInFloatingLockScreenAlert; // @synthesize showsDateInFloatingLockScreenAlert=_showsDateInFloatingLockScreenAlert;
@property(nonatomic) _Bool orderSectionUsingRecencyDate; // @synthesize orderSectionUsingRecencyDate=_orderSectionUsingRecencyDate;
@property(nonatomic) _Bool usesVariableLayout; // @synthesize usesVariableLayout=_usesVariableLayout;
@property(nonatomic) unsigned long long messageNumberOfLines; // @synthesize messageNumberOfLines=_messageNumberOfLines;
@property(nonatomic) _Bool showsSubtitle; // @synthesize showsSubtitle=_showsSubtitle;
- (id)replacementObjectForCoder:(id)arg1;	// IMP=0x000000000004a12a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000049eca
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000499c6
- (unsigned long long)hash;	// IMP=0x000000000004997a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000049893
- (id)allSubtypes;	// IMP=0x000000000004981f
- (id)parametersForSubtype:(long long)arg1;	// IMP=0x0000000000049736
- (id)init;	// IMP=0x0000000000049622

@end

