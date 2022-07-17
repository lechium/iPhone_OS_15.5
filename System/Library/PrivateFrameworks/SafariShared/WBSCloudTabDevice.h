//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface WBSCloudTabDevice : NSObject <NSCopying>
{
    _Bool _closeRequestSupported;	// 8 = 0x8
    _Bool _hasDuplicateName;	// 9 = 0x9
    _Bool _ephemeralDevice;	// 10 = 0xa
    _Bool _cloudKitBookmarkSyncingSupported;	// 11 = 0xb
    NSString *_disambiguatedName;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_uuid;	// 32 = 0x20
    NSArray *_tabs;	// 40 = 0x28
    NSDate *_lastModified;	// 48 = 0x30
}

+ (_Bool)isEphemeralDeviceInDictionary:(id)arg1;	// IMP=0x0000000000035e30
+ (_Bool)hasDuplicateDeviceNameInDictionary:(id)arg1;	// IMP=0x0000000000035e14
+ (id)lastModifiedDateInDictionary:(id)arg1;	// IMP=0x0000000000035df8
+ (id)deviceNameInDictionary:(id)arg1;	// IMP=0x0000000000035ddc
+ (unsigned long long)tabCountInDictionary:(id)arg1;	// IMP=0x0000000000035d8e
+ (_Bool)isCloudTabDeviceDictionary:(id)arg1;	// IMP=0x0000000000035ce4
+ (id)_dictionaryWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(_Bool)arg3 tabs:(id)arg4 isEphemeralDevice:(_Bool)arg5;	// IMP=0x0000000000035923
- (void).cxx_destruct;	// IMP=0x0000000000035e98
@property(readonly, nonatomic, getter=isCloudKitBookmarkSyncingSupported) _Bool cloudKitBookmarkSyncingSupported; // @synthesize cloudKitBookmarkSyncingSupported=_cloudKitBookmarkSyncingSupported;
@property(readonly, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(readonly, copy, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic, getter=isEphemeralDevice) _Bool ephemeralDevice; // @synthesize ephemeralDevice=_ephemeralDevice;
@property(readonly, nonatomic) _Bool hasDuplicateName; // @synthesize hasDuplicateName=_hasDuplicateName;
@property(readonly, nonatomic, getter=isCloseRequestSupported) _Bool closeRequestSupported; // @synthesize closeRequestSupported=_closeRequestSupported;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)description;	// IMP=0x000000000003580b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003570c
- (unsigned long long)hash;	// IMP=0x00000000000356f6
- (id)deviceBySettingDisambiguatedName:(id)arg1;	// IMP=0x000000000003565f
- (id)deviceByRemovingTabs:(id)arg1;	// IMP=0x00000000000353cc
- (id)deviceByRemovingTab:(id)arg1;	// IMP=0x0000000000035284
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000035279
@property(readonly, copy, nonatomic) NSString *disambiguatedName; // @synthesize disambiguatedName=_disambiguatedName;
- (id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(_Bool)arg3 tabs:(id)arg4 uuid:(id)arg5 isEphemeralDevice:(_Bool)arg6;	// IMP=0x000000000003517a
- (id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(_Bool)arg3 tabs:(id)arg4 uuid:(id)arg5;	// IMP=0x000000000003515e
- (id)initWithDictionary:(id)arg1 uuid:(id)arg2;	// IMP=0x0000000000034d5c

@end
