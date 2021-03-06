//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface MFAttachmentRaw : NSObject <NSSecureCoding>
{
    NSData *_data;	// 8 = 0x8
    NSString *_fileName;	// 16 = 0x10
    NSString *_mimeType;	// 24 = 0x18
    NSString *_contentID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c42e8
+ (id)attachmentData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;	// IMP=0x00000000000c4050
+ (id)attachmentData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3;	// IMP=0x00000000000c402b
- (void).cxx_destruct;	// IMP=0x00000000000c449f
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c42f0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c4167

@end

