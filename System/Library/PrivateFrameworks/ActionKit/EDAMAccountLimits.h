//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface EDAMAccountLimits
{
    NSNumber *_userMailLimitDaily;	// 8 = 0x8
    NSNumber *_noteSizeMax;	// 16 = 0x10
    NSNumber *_resourceSizeMax;	// 24 = 0x18
    NSNumber *_userLinkedNotebookMax;	// 32 = 0x20
    NSNumber *_uploadLimit;	// 40 = 0x28
    NSNumber *_userNoteCountMax;	// 48 = 0x30
    NSNumber *_userNotebookCountMax;	// 56 = 0x38
    NSNumber *_userTagCountMax;	// 64 = 0x40
    NSNumber *_noteTagCountMax;	// 72 = 0x48
    NSNumber *_userSavedSearchesMax;	// 80 = 0x50
    NSNumber *_noteResourceCountMax;	// 88 = 0x58
    NSNumber *_userDeviceLimit;	// 96 = 0x60
    NSNumber *_userAdvertisedDeviceLimit;	// 104 = 0x68
}

+ (id)structFields;	// IMP=0x000000000022d2e6
+ (id)structName;	// IMP=0x000000000022d2d9
- (void).cxx_destruct;	// IMP=0x000000000022d892
@property(retain, nonatomic) NSNumber *userAdvertisedDeviceLimit; // @synthesize userAdvertisedDeviceLimit=_userAdvertisedDeviceLimit;
@property(retain, nonatomic) NSNumber *userDeviceLimit; // @synthesize userDeviceLimit=_userDeviceLimit;
@property(retain, nonatomic) NSNumber *noteResourceCountMax; // @synthesize noteResourceCountMax=_noteResourceCountMax;
@property(retain, nonatomic) NSNumber *userSavedSearchesMax; // @synthesize userSavedSearchesMax=_userSavedSearchesMax;
@property(retain, nonatomic) NSNumber *noteTagCountMax; // @synthesize noteTagCountMax=_noteTagCountMax;
@property(retain, nonatomic) NSNumber *userTagCountMax; // @synthesize userTagCountMax=_userTagCountMax;
@property(retain, nonatomic) NSNumber *userNotebookCountMax; // @synthesize userNotebookCountMax=_userNotebookCountMax;
@property(retain, nonatomic) NSNumber *userNoteCountMax; // @synthesize userNoteCountMax=_userNoteCountMax;
@property(retain, nonatomic) NSNumber *uploadLimit; // @synthesize uploadLimit=_uploadLimit;
@property(retain, nonatomic) NSNumber *userLinkedNotebookMax; // @synthesize userLinkedNotebookMax=_userLinkedNotebookMax;
@property(retain, nonatomic) NSNumber *resourceSizeMax; // @synthesize resourceSizeMax=_resourceSizeMax;
@property(retain, nonatomic) NSNumber *noteSizeMax; // @synthesize noteSizeMax=_noteSizeMax;
@property(retain, nonatomic) NSNumber *userMailLimitDaily; // @synthesize userMailLimitDaily=_userMailLimitDaily;

@end
