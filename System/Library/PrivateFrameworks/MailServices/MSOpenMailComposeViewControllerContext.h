//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MailServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface MSOpenMailComposeViewControllerContext : NSObject <NSSecureCoding>
{
    NSString *_autosaveIdentifier;	// 8 = 0x8
    NSDictionary *_compositionValues;	// 16 = 0x10
    NSArray *_attachments;	// 24 = 0x18
    NSString *_hostApplicationBundleIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007473
+ (id)unarchiveFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007356
- (void).cxx_destruct;	// IMP=0x00000000000078f9
@property(retain, nonatomic) NSString *hostApplicationBundleIdentifier; // @synthesize hostApplicationBundleIdentifier=_hostApplicationBundleIdentifier;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSDictionary *compositionValues; // @synthesize compositionValues=_compositionValues;
@property(readonly, nonatomic) NSString *autosaveIdentifier; // @synthesize autosaveIdentifier=_autosaveIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000075c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000747b
- (id)initWithAutosaveIdentifier:(id)arg1 compositionValues:(id)arg2 attachments:(id)arg3;	// IMP=0x0000000000007246

@end
