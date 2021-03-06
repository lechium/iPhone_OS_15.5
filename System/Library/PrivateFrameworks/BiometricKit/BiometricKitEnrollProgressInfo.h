//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BiometricKitEnrollProgressInfo : NSObject
{
    int _message;	// 8 = 0x8
    long long _progress;	// 16 = 0x10
    long long _currentPrimaryComponentID;	// 24 = 0x18
    NSDictionary *_captureImage;	// 32 = 0x20
    NSDictionary *_renderedImage;	// 40 = 0x28
    NSDictionary *_messageDetails;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000003140
@property(retain, nonatomic) NSDictionary *messageDetails; // @synthesize messageDetails=_messageDetails;
@property(nonatomic) int message; // @synthesize message=_message;
@property(retain, nonatomic) NSDictionary *renderedImage; // @synthesize renderedImage=_renderedImage;
@property(retain, nonatomic) NSDictionary *captureImage; // @synthesize captureImage=_captureImage;
@property(nonatomic) long long currentPrimaryComponentID; // @synthesize currentPrimaryComponentID=_currentPrimaryComponentID;
@property(nonatomic) long long progress; // @synthesize progress=_progress;
- (void)dealloc;	// IMP=0x000000000000304f
- (id)init;	// IMP=0x0000000000002fe0

@end

