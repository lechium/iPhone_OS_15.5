//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, UIImage;

@interface EKDayOccurrenceContentPayload : NSObject
{
    long long _requestId;	// 8 = 0x8
    unsigned long long _requestOptions;	// 16 = 0x10
    UIImage *_backgroundImage;	// 24 = 0x18
    UIImage *_textImage;	// 32 = 0x20
    UIImage *_travelTimeImage;	// 40 = 0x28
    NSAttributedString *_travelTimeString;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000c862f
@property(readonly, nonatomic) NSAttributedString *travelTimeString; // @synthesize travelTimeString=_travelTimeString;
@property(readonly, nonatomic) UIImage *travelTimeImage; // @synthesize travelTimeImage=_travelTimeImage;
@property(readonly, nonatomic) UIImage *textImage; // @synthesize textImage=_textImage;
@property(readonly, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(readonly, nonatomic) unsigned long long requestOptions; // @synthesize requestOptions=_requestOptions;
@property(readonly, nonatomic) long long requestId; // @synthesize requestId=_requestId;
- (id)initWithRequestId:(long long)arg1 requestOptions:(unsigned long long)arg2 backgroundImage:(id)arg3 textImage:(id)arg4 travelTimeImage:(id)arg5 travelTimeString:(id)arg6;	// IMP=0x00000000000c8504

@end

