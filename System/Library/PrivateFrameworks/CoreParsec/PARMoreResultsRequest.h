//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSSecureCoding-Protocol.h>

@class NSURL;

@interface PARMoreResultsRequest <NSSecureCoding>
{
    NSURL *_moreResultsURL;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000099689
- (void).cxx_destruct;	// IMP=0x0000000000099676
@property(copy, nonatomic) NSURL *moreResultsURL; // @synthesize moreResultsURL=_moreResultsURL;
- (unsigned int)nwActivityLabel;	// IMP=0x0000000000099649
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000995ae
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000099531

@end

