//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DiagnosticExtensions/NSSecureCoding-Protocol.h>

@class NSArray, NSURL;

@interface DEAttachmentGroup <NSSecureCoding>
{
    NSURL *_rootURL;	// 8 = 0x8
    NSArray *_attachmentItems;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000e296
+ (id)createWithName:(id)arg1 rootURL:(id)arg2 attachmentItems:(id)arg3;	// IMP=0x000000000000e00c
+ (id)createWithName:(id)arg1 rootURL:(id)arg2;	// IMP=0x000000000000dcf4
- (void).cxx_destruct;	// IMP=0x000000000000e854
@property(retain, nonatomic) NSArray *attachmentItems; // @synthesize attachmentItems=_attachmentItems;
@property(retain, nonatomic) NSURL *rootURL; // @synthesize rootURL=_rootURL;
- (id)attachToDestinationDir:(id)arg1;	// IMP=0x000000000000e29e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e1f7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000e12c

@end
