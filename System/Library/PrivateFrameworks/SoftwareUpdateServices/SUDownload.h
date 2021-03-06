//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/NSCopying-Protocol.h>
#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@class SUDescriptor, SUDownloadMetadata, SUDownloadOptions, SUOperationProgress;

@interface SUDownload : NSObject <NSSecureCoding, NSCopying>
{
    SUDescriptor *_descriptor;	// 8 = 0x8
    SUOperationProgress *_progress;	// 16 = 0x10
    SUDownloadOptions *_downloadOptions;	// 24 = 0x18
    SUDownloadMetadata *_metadata;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000025813
@property(retain, nonatomic) SUDownloadMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) SUDownloadOptions *downloadOptions; // @synthesize downloadOptions=_downloadOptions;
@property(retain, nonatomic) SUDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(retain, nonatomic) SUOperationProgress *progress; // @synthesize progress=_progress;
- (_Bool)isValidDownload;	// IMP=0x0000000000025af4
- (id)description;	// IMP=0x0000000000025a7b
- (unsigned long long)totalSpaceConsumed;	// IMP=0x0000000000025831
- (_Bool)allowCellularDownload;	// IMP=0x000000000002581b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000025775
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000256ef
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025621
- (void)dealloc;	// IMP=0x000000000002550b
- (id)init;	// IMP=0x00000000000254c8

@end

