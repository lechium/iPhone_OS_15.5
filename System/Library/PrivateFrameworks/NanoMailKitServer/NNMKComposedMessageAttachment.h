//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoMailKitServer/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL;

@interface NNMKComposedMessageAttachment : NSObject <NSSecureCoding>
{
    NSString *_fileName;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSString *_mimeType;	// 32 = 0x20
    NSString *_utiType;	// 40 = 0x28
    unsigned long long _fileSize;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000699a
- (void).cxx_destruct;	// IMP=0x0000000000006dbf
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *utiType; // @synthesize utiType=_utiType;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void)logTransmission;	// IMP=0x0000000000006ce6
- (_Bool)prepareForArchiving;	// IMP=0x0000000000006c30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000006b48
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000069a2

@end

