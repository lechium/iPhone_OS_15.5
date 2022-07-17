//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Social/NSSecureCoding-Protocol.h>

@class NSString, UIImage;

@interface SLMicroBlogUserRecord : NSObject <NSSecureCoding>
{
    NSString *_name;	// 8 = 0x8
    NSString *_screen_name;	// 16 = 0x10
    NSString *_profile_image_url;	// 24 = 0x18
    UIImage *_profileImageCache;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004844c
+ (id)userRecordWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000000000480f8
- (void).cxx_destruct;	// IMP=0x000000000004859c
@property(retain) UIImage *profileImageCache; // @synthesize profileImageCache=_profileImageCache;
@property(retain, nonatomic) NSString *profile_image_url; // @synthesize profile_image_url=_profile_image_url;
@property(retain, nonatomic) NSString *screen_name; // @synthesize screen_name=_screen_name;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000048454
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004830d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004822a
- (void)setValuesWithUserDictionary:(id)arg1;	// IMP=0x0000000000048147

@end
