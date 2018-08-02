#import <Foundation/Foundation.h>

#import "MSAnalyticsTransmissionTarget.h"
#import "MSChannelGroupProtocol.h"
#import "MSUtility.h"

NS_ASSUME_NONNULL_BEGIN

@interface MSAnalyticsTransmissionTarget ()

/**
 * Parent transmission target of this target.
 */
@property(nonatomic, nullable) MSAnalyticsTransmissionTarget *parentTarget;

/**
 * Child transmission targets nested to this transmission target.
 */
@property(nonatomic)
    NSMutableDictionary<NSString *, MSAnalyticsTransmissionTarget *>
        *childTransmissionTargets;

/**
 * isEnabled value storage key.
 */
@property(nonatomic, readonly) NSString *isEnabledKey;

/**
 * The channel group.
 */
@property(nonatomic, readonly) id<MSChannelGroupProtocol> channelGroup;

@end

NS_ASSUME_NONNULL_END