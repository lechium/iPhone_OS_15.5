//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface S3AccessConfig : NSObject
{
    NSString *_AWSAccessKeyID;	// 8 = 0x8
    NSString *_AWSSecretAccessKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000005b67b
@property(retain, nonatomic) NSString *AWSSecretAccessKey; // @synthesize AWSSecretAccessKey=_AWSSecretAccessKey;
@property(retain, nonatomic) NSString *AWSAccessKeyID; // @synthesize AWSAccessKeyID=_AWSAccessKeyID;
- (id)initWithAWSAccessKeyID:(id)arg1 AWSSecretAccessKey:(id)arg2;	// IMP=0x001000000005b5ac

@end
