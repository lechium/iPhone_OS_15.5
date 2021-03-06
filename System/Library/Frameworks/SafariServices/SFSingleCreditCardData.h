//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSSingleCreditCardData.h>

#import <SafariServices/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFSingleCreditCardData : WBSSingleCreditCardData <NSSecureCoding>
{
    NSString *_headerText;	// 8 = 0x8
    NSString *_displayText;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000be37
- (void).cxx_destruct;	// IMP=0x000000000000c002
@property(readonly, copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(readonly, copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000bede
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000be3f
- (id)initWithHeaderText:(id)arg1 displayText:(id)arg2 type:(long long)arg3 value:(id)arg4;	// IMP=0x000000000000bd71

@end

