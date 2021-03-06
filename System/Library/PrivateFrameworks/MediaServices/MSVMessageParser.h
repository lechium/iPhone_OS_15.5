//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol MSVMessageParserDelegate;

@interface MSVMessageParser : NSObject
{
    id <MSVMessageParserDelegate> _delegate;	// 8 = 0x8
    NSMutableData *_unhandledPartialObjectData;	// 16 = 0x10
    long long _unhandledObjectDataExpectedLength;	// 24 = 0x18
    NSMutableData *_unhandledPartialData;	// 32 = 0x20
}

+ (id)createHeader:(unsigned long long)arg1;	// IMP=0x000000000002c8af
- (void).cxx_destruct;	// IMP=0x000000000002cd00
@property(retain, nonatomic) NSMutableData *unhandledPartialData; // @synthesize unhandledPartialData=_unhandledPartialData;
@property(nonatomic) long long unhandledObjectDataExpectedLength; // @synthesize unhandledObjectDataExpectedLength=_unhandledObjectDataExpectedLength;
@property(retain, nonatomic) NSMutableData *unhandledPartialObjectData; // @synthesize unhandledPartialObjectData=_unhandledPartialObjectData;
@property(nonatomic) __weak id <MSVMessageParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegate:(id)arg1;	// IMP=0x000000000002cc00
- (void)processData:(id)arg1;	// IMP=0x000000000002c928

@end

