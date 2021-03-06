//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact, NSString, UIImage;

@interface PXComposeRecipientTableCellModel
{
    _Bool _isValidAddress;	// 8 = 0x8
    _Bool _checked;	// 9 = 0x9
    _Bool _showsCheckbox;	// 10 = 0xa
    UIImage *_image;	// 16 = 0x10
    long long _imageRequestID;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_address;	// 40 = 0x28
    CNContact *_contact;	// 48 = 0x30
}

+ (double)imageInset;	// IMP=0x000000000086daed
+ (double)imageVerticalInset;	// IMP=0x000000000086dadf
+ (double)imageDiameter;	// IMP=0x000000000086dad1
- (void).cxx_destruct;	// IMP=0x000000000086da7e
@property(readonly, copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) _Bool showsCheckbox; // @synthesize showsCheckbox=_showsCheckbox;
@property(readonly, nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(readonly, nonatomic) _Bool isValidAddress; // @synthesize isValidAddress=_isValidAddress;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long imageRequestID; // @synthesize imageRequestID=_imageRequestID;
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)setContact:(id)arg1;	// IMP=0x000000000086d976
- (void)setShowsCheckbox:(_Bool)arg1;	// IMP=0x000000000086d94e
- (void)setChecked:(_Bool)arg1;	// IMP=0x000000000086d926
- (void)setIsValidAddress:(_Bool)arg1;	// IMP=0x000000000086d8fe
- (void)setAddress:(id)arg1;	// IMP=0x000000000086d87b
- (void)setName:(id)arg1;	// IMP=0x000000000086d7f8
- (void)setImageRequestID:(long long)arg1;	// IMP=0x000000000086d7ce
- (void)setImage:(id)arg1;	// IMP=0x000000000086d74b
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000086d71c
- (id)init;	// IMP=0x000000000086d6d9

@end

