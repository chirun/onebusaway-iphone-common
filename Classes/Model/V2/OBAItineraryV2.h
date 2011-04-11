#import "OBAHasReferencesV2.h"
#import "OBALegV2.h"


@interface OBAItineraryV2 : OBAHasReferencesV2 {
    NSMutableArray * _legs;
}

@property (nonatomic,retain) NSDate * startTime;
@property (nonatomic,retain) NSDate * endTime;
@property (nonatomic,readonly) NSArray * legs;
@property (nonatomic) double probability;
@property (nonatomic,retain) NSDictionary * rawData;

- (void) addLeg:(OBALegV2*)leg;

@end
