//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface HKEADFFileParser : NSObject
{
    NSData *_data;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000015d20a
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)newBuilderWithStartDate:(id)arg1;	// IMP=0x000000000015cedd
- (id)payloadInRange:(struct _NSRange)arg1;	// IMP=0x000000000015ce79
- (void)enumerateChannelsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000015cd2c
- (void)_enumerateHeadersWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000015cc07
- (id)initWithData:(id)arg1;	// IMP=0x000000000015cb9c

@end
